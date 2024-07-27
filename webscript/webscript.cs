using System;
using OpenQA.Selenium;
using OpenQA.Selenium.Chrome;

public class WebScraper
{
    public static void Main(string[] args)
    {
        // Создаем экземпляр ChromeDriver
        IWebDriver driver = new ChromeDriver();

        // Переходим на сайт
        driver.Navigate().GoToUrl("https://www.wowauctions.net/auctionHouse/classic-eu/flamegor-eu/alliance/элементиевая-руда-52185");

        // Находим элемент с "Average Buyout"
        IWebElement element = driver.FindElement(By.XPath("//tr/td/h3[text()='Average Buyout']/../../td//table/tbody/tr"));

        // Извлекаем значения goldCoin и silverCoin
        string goldCoinValue = element.FindElement(By.ClassName("text-goldCoin")).Text.Replace("g", "");
        string silverCoinValue = element.FindElement(By.ClassName("text-silverCoin")).Text.Replace("s", "");

        // Выводим значения
        Console.WriteLine($"goldCoin: {goldCoinValue}");
        Console.WriteLine($"silverCoin: {silverCoinValue}");

        // Передаем значения в C++ код
        PassValuesToC(Convert.ToDouble(goldCoinValue), Convert.ToDouble(silverCoinValue));

        // Закрываем браузер
        driver.Quit();
    }

    private static void PassValuesToC(double goldCoin, double silverCoin)
    {
        // Код для передачи значений в C++ код
        // ...
    }
}