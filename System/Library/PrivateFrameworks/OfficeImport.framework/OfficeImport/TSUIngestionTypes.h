@interface TSUIngestionTypes : NSObject

+ (id)supportedImageTypes;
+ (id)supportedMovieTypes;
+ (id)highEfficiencyImageTypes;
+ (BOOL)isValidPlainTextUTI:(id)a0;
+ (id)p_supportedPlainTextTypes;
+ (id)p_unsupportedPlainTextTypes;
+ (id)supportedRichTextTypes;

@end
