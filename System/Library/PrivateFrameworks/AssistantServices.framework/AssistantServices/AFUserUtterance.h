@class NSArray, NSDictionary, NSString, NSMutableArray;

@interface AFUserUtterance : NSObject {
    NSMutableArray *_phrases;
    NSMutableArray *_tokens;
    NSString *_text;
    long long _sentenceConfidence;
    NSMutableArray *_utterances;
}

@property (readonly, nonatomic) NSDictionary *correctionIdentifier;
@property (readonly, nonatomic) NSArray *dictationResult;
@property (readonly, nonatomic) NSArray *allPhrases;

- (void).cxx_destruct;
- (id)description;
- (id)streamingTokens;
- (void)_updatePhraseswithSwapIndices:(id)a0;
- (void)_updateUtteranceswithAlternativeUtteranceAtIndex:(unsigned long long)a0 swapIndices:(id)a1;
- (id)allRecognitionStringsAndScores;
- (id)bestTextInterpretation;
- (id)initWithPhrases:(id)a0 correctionIdentifier:(id)a1;
- (id)initWithPhrases:(id)a0 sentenceConfidence:(long long)a1 utterances:(id)a2 correctionIdentifier:(id)a3;
- (id)initWithPhrases:(id)a0 utterances:(id)a1;
- (id)initWithString:(id)a0 correctionIdentifier:(id)a1;
- (id)initWithTokens:(id)a0 correctionIdentifier:(id)a1;
- (id)interpretationOfUtteranceAtIndex:(unsigned long long)a0;
- (id)longestCommonSubsequenceBetweenList:(id)a0 andList:(id)a1;
- (long long)numberOfAlternativeUtterances;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)a0 comparedToBaseTokenList:(id)a1;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)a0 comparedToBaseUtteranceAtIndex:(unsigned long long)a1;
- (id)rangeListOfDifferingTextFromTargetTokenList:(id)a0 comparedToBaseTokenList:(id)a1;
- (id)rangeListOfDifferingTextFromUtteranceAtIndex:(unsigned long long)a0 comparedToBaseUtteranceAtIndex:(unsigned long long)a1;
- (id)speechTokensForUtteranceAtIndex:(unsigned long long)a0;
- (id)textOfUtteranceAtIndex:(unsigned long long)a0;
- (id)updateDictationResult:(id)a0 withAlternativeUtteranceAtIndex:(unsigned long long)a1;

@end
