using System;
using OpenQA.Selenium;
using OpenQA.Selenium.Chrome;
using System.Threading;
using System.IO;

namespace WebScrapingWithSelenium
{
    class Program
    {
        static void Main(string[] args)
        {
            string filePath = "cpp_web_url.txt"; // Укажите имя файла или путь к файлу

            try
            {
                // Проверяем, существует ли файл
                if (!File.Exists(filePath))
                {
                    // Создаем пустой файл
                    using (FileStream fs = File.Create(filePath))
                    {
                        // Здесь можно ничего не делать, файл будет пустым
                    }

                    Console.WriteLine("web_script: The file was created successfully.");
                }
                else
                {
                    Console.WriteLine("web_script: The file already exists.");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine("web_script: Error: " + ex.Message);
            }

            // Укажите путь к вашему текстовому файлу
            string content = File.ReadAllText(filePath);

            // Выводим содержимое файла на консоль
            Console.WriteLine("Url:");
            Console.WriteLine(content);
            // Настройки для запуска веб-драйвера
            ChromeOptions options = new ChromeOptions();
            options.AddArguments("headless"); // Запуск в фоновом режиме
            IWebDriver driver = new ChromeDriver(options);



            try
            {
                // Загрузите страницу (замените "URL" на реальный URL сайта)
                driver.Navigate().GoToUrl(content);

                // Подождите некоторое время, чтобы данные могли загрузиться
                Thread.Sleep(5000);

                // Попробуйте найти нужные элементы
                string number1 = null;
                string number2 = null;

                try
                {
                    number1 = driver.FindElement(By.XPath("/html/body/div/main/div[3]/div[2]/div[2]/table/tbody/tr[3]/td[2]/table/tbody/tr/td[1]")).Text;
                }
                catch (NoSuchElementException)
                {
                    number1 = driver.FindElement(By.XPath("/html/body/div/main/div[3]/div[2]/div[3]/table/tbody/tr[3]/td[2]/table/tbody/tr/td[1]")).Text;
                }

                try
                {
                    number2 = driver.FindElement(By.XPath("/html/body/div/main/div[3]/div[2]/div[2]/table/tbody/tr[3]/td[2]/table/tbody/tr/td[2]")).Text;
                }
                catch (NoSuchElementException)
                {
                    number2 = driver.FindElement(By.XPath("/html/body/div/main/div[3]/div[2]/div[3]/table/tbody/tr[3]/td[2]/table/tbody/tr/td[2]")).Text;
                }

                // Вывод значений в консоль для последующего использования в C++ коде
                if (number1 != null)
                {
                    Console.WriteLine("Number1: " + number1);
                }
                if (number2 != null)
                {
                    Console.WriteLine("Number2: " + number2);
                }
                // Запишите данные в файл
                using (StreamWriter writer = new StreamWriter("webres.txt"))
                {
                    writer.WriteLine($"Number 1: {number1}");
                    writer.WriteLine($"Number 2: {number2}");
                }

                Console.WriteLine("web_script: Data saved to webres.txt");
            }
            finally
            {
                driver.Quit();
            }
        }
    }
}