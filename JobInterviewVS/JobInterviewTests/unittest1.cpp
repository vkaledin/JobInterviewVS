#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\StringFunc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace JobInterviewTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(NullTerminatedCharacterHandle)
		{
			const char * sourceString = "";
			const char * expectedString = "";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}
		
		TEST_METHOD(TwoNullTerminatedCharactersHandle)
		{
			const char * sourceString = "\0\0";
			const char * expectedString = "\0";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(NonAlphaCharactersHandle)
		{
			const char * sourceString = "\t";
			const char * expectedString = "\t";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(OneAlfaCharacterHandle)
		{
			const char * sourceString = "a";
			const char * expectedString = "a";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(TwoSameAlfaCharactersHandle)
		{
			const char * sourceString = "aa";
			const char * expectedString = "aa";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(TwoNotSameAlfaCharactersHandle)
		{
			const char * sourceString = "ab";
			const char * expectedString = "ab";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(ThreeNotSameAlfaCharactersHandle)
		{
			const char * sourceString = "abc";
			const char * expectedString = "ab";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(OneCharacterChangeHandle)
		{
			const char * sourceString = "aaaabbbb";
			const char * expectedString = "aaaabbbb";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(TwoCharacterChangesHandle)
		{
			const char * sourceString = "aaaabbbbaaa";
			const char * expectedString = "aaaabbbbaaa";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(ReultSubStringBeginsNotFromStringStart)
		{
			const char * sourceString = "abbcc";
			const char * expectedString = "bbcc";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(IsResultStringEqualToExpectedOne_1)
		{
			const char * sourceString = "abaabbcaabbccddccaaa";
			const char * expectedString = "abaabb";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(IsResultStringEqualToExpectedOne_2)
		{
			const char * sourceString = "aabbaaaabbaabcaaaccccaaabbbbbdddddaaaadddaaabbbc";
			const char * expectedString = "dddddaaaadddaaa";
			char * actualString = LongestSubStringOfTwoChars(sourceString);
			Assert::AreEqual(expectedString, actualString);
		}

	};
}