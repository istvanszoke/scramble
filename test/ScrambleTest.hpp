//ScrambleTest.h

#include <cxxtest/TestSuite.h>

#include <../src/Scramble.h>

class ScrambleTest : public CxxTest::TestSuite
{

public:

    void set_Up()
    {
        
    }

	void tearDown()
	{

	}

    void testScramble_scrambleWords()
    {
		Scramble scramble = Scramble();
        TS_ASSERT_EQUALS(scramble.scramble("thing"), "tnihg");
		scramble.clear();
		TS_ASSERT_EQUALS(scramble.scramble("whole"), "wlohe");
		scramble.clear();
		TS_ASSERT_EQUALS(scramble.scramble("important"), "inatropmt");
		scramble.clear();
		TS_ASSERT_EQUALS(scramble.scramble("problem"), "pelborm");

    }

    void testScramble_scrambleSentence()
    {
		Scramble scramble = Scramble();
		TS_ASSERT_EQUALS(scramble.scramble("Hello world!"), "Hlleo wlrod!");
    }
	
	void testScramble_scrambleLongText()
	{
		Scramble scramble = Scramble();
		std::string myText = "According to research at Cambridge University, it doesn't matter in what order the letters in a word are, the only important thing is that the first and last letter be at the right place. The rest can be a total mess and you can still read it without a problem. This is because the human mind does not read every letter by itself, but the word as a whole.";
		std::string scrambledText = "Anidroccg to rcraeseh at Cgdirbmae Utisreviny, it d'nseot mettar in waht oedrr the lrettes in a wrod are, the olny inatropmt tnihg is taht the fsrit and lsat letter be at the rhgit pcale. The rset can be a tatol mses and you can slitl raed it wuohtit a pelborm. Tihs is bsuacee the hamun mnid deos not raed erevy letter by ilestf, but the wrod as a wlohe.";
		TS_ASSERT_EQUALS(scramble.scramble(myText), scrambledText);
	}
};
