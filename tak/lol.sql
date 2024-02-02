-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 02 Lut 2024, 12:30
-- Wersja serwera: 10.4.22-MariaDB
-- Wersja PHP: 8.1.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `lol`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `main`
--

CREATE TABLE `main` (
  `imie` varchar(35) NOT NULL,
  `pasywa` varchar(35) DEFAULT NULL,
  `q` varchar(35) DEFAULT NULL,
  `w` varchar(35) DEFAULT NULL,
  `e` varchar(35) DEFAULT NULL,
  `r` varchar(35) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Zrzut danych tabeli `main`
--

INSERT INTO `main` (`imie`, `pasywa`, `q`, `w`, `e`, `r`) VALUES
('Akali', 'Assassin\'s Mark', 'Five Point Strike', 'Twilight Shroud', 'Shuriken Flip', 'Perfect Execution'),
('Katarina', 'Voracity', 'Bouncing Blade', 'Preparation', 'Shunpo', 'Death Lotus'),
('Yasuo', 'Way of the Wanderer', 'Steel Tempest', 'Wind Wall', 'Sweeping Blade', 'Last Breath');

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `main`
--
ALTER TABLE `main`
  ADD PRIMARY KEY (`imie`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
