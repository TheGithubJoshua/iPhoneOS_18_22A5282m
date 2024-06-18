@class NSString;

@interface TUITypedStringCandidate : TIKeyboardCandidateSingle

@property (retain, nonatomic) NSString *displayLabel;

+ (id)typedStringCandidateWithLocale:(id)a0 typedString:(id)a1 rawTypedString:(id)a2;

- (void).cxx_destruct;
- (id)label;

@end
