@interface SGLanguageDetection : NSObject

+ (void)logMatchingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 lowercaseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 text:(id)a2 lowercaseText:(id)a3;
+ (id)detectLanguageFromLanguageTags:(id)a0 withMinimumCount:(unsigned long long)a1 withMinimumAgreement:(double)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeForText:(id)a0 maxTruncatedLength:(unsigned long long)a1 tagger:(id)a2 taggerOptions:(unsigned long long)a3 prevTextTokenMaxRange:(unsigned long long)a4 originalLengthShortfall:(unsigned long long)a5 lowercaseText:(id)a6 lowercaseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7;
+ (id)dominantLanguageTagFromLanguageTags:(id)a0;
+ (id)dominantLanguageTagFromText:(id)a0;
+ (id)languageForLocaleIdentifier:(id)a0;
+ (id)dominantLanguageTagFromText:(id)a0 withMaxLength:(unsigned long long)a1 withMaxTags:(unsigned long long)a2 withMinimumCount:(unsigned long long)a3 withMinimumAgreement:(double)a4;
+ (id)languageTagsFromText:(id)a0 withMaxLength:(unsigned long long)a1 withMaxTags:(unsigned long long)a2;
+ (id)detectLanguageFromText:(id)a0 withMaxLength:(unsigned long long)a1 withMaxTags:(unsigned long long)a2 withMinimumCount:(unsigned long long)a3 withMinimumAgreement:(double)a4;
+ (id)dominantLanguageTagFromLanguageTags:(id)a0 withMinimumCount:(unsigned long long)a1 withMinimumAgreement:(double)a2;
+ (id)defaultLanguage;
+ (id)detectLanguageFromLanguageTags:(id)a0;
+ (id)detectLanguageFromText:(id)a0;

@end
