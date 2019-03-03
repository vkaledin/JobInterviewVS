#include "CppUnitTest.h"
#include "..\StringFunc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace JobInterviewTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(NullTerminatedCharacterHandling)
		{
			const char * sourceString = "";
			const char * expectedString = "";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}
		
		TEST_METHOD(TwoNullTerminatedCharactersHandling)
		{
			const char * sourceString = "\0\0";
			const char * expectedString = "\0";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(NullTerminatedCharacterIsInStringHandling)
		{
			const char * sourceString = "g\0\0g";
			const char * expectedString = "g";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(NonAlphaCharactersHandling)
		{
			const char * sourceString = "g956\t\n\t56";
			const char * expectedString = "\t\n\t";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(NonPrintableCharactersHandling)
		{
			const char * sourceString = "\x1b""\x18""\xd""\x18";
			const char * expectedString = "\x18""\xd""\x18";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(OneAlfaCharacterHandling)
		{
			const char * sourceString = "a";
			const char * expectedString = "a";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(TwoSameAlfaCharactersHandling)
		{
			const char * sourceString = "aa";
			const char * expectedString = "aa";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(TwoNotSameAlfaCharactersHandling)
		{
			const char * sourceString = "ab";
			const char * expectedString = "ab";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(ThreeNotSameAlfaCharactersHandling)
		{
			const char * sourceString = "abc";
			const char * expectedString = "ab";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(OneCharacterChangeHandling)
		{
			const char * sourceString = "aaaabbbb";
			const char * expectedString = "aaaabbbb";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(TwoCharacterChangesHandling)
		{
			const char * sourceString = "aaaabbbbaaa";
			const char * expectedString = "aaaabbbbaaa";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(ResultSubStringBeginsNotFromStringStart)
		{
			const char * sourceString = "abbcc";
			const char * expectedString = "bbcc";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(IsResultStringEqualToExpectedOne_1)
		{
			const char * sourceString = "abaabbcaabbccddccaaa";
			const char * expectedString = "abaabb";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

		TEST_METHOD(IsResultStringEqualToExpectedOne_2)
		{
			const char * sourceString = "aabbaaaabbaabcaaaccccaaabbbbbdddddaaaadddaaabbbc";
			const char * expectedString = "dddddaaaadddaaa";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
			free(actualString);
		}

	};
}