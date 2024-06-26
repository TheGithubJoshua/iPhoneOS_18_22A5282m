@class NSArray, NSIndexPath;

@interface UIDictationSerializableResults : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSArray *multilingualAlternatives;
@property (nonatomic) BOOL fromKeyboard;
@property (nonatomic) BOOL showMultilingualAlternatives;
@property (nonatomic) BOOL lowConfidenceAboutLanguageDetection;
@property (nonatomic) const struct __CFString { } *transform;
@property (nonatomic) BOOL useServerCapitalization;
@property (nonatomic) BOOL addTrailingSpace;
@property (retain, nonatomic) NSIndexPath *indexPathOfInterpretations;
@property (readonly, nonatomic) BOOL allowsAlternatives;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)text;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)bestResults;
- (id)bestText;
- (id)bestTextArray;
- (id)bestTextArrayForAlternatives:(id)a0;
- (id)bestTextForMultilingualAlternatives;
- (id)dictationPhraseArray;
- (id)initWithArrayOfArrayOfStrings:(id)a0;
- (id)initWithDetectedPhrases:(id)a0 multilingualAlternatives:(id)a1;
- (id)initWithPhrases:(id)a0;
- (id)multilingualResultsByLanguageCode;
- (id)secondBestText;
- (id)secondBestTextArray;
- (id)singleLineResult;
- (id)textArray;
- (id)textArrayForAlternatives:(id)a0;

@end
