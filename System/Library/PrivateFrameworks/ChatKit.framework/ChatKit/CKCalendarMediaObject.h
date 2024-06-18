@interface CKCalendarMediaObject : CKCardMediaObject

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;

- (int)mediaType;
- (id)subtitle;
- (id)attachmentSummary:(unsigned long long)a0;
- (BOOL)shouldBeQuickLooked;

@end
