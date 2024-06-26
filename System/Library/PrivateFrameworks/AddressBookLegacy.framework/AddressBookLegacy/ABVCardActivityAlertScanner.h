@class NSString;

@interface ABVCardActivityAlertScanner : NSObject {
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)a0;
+ (BOOL)characterIsStringValueCharacter:(unsigned short)a0;
+ (id)scanAlertValueFromString:(id)a0;

- (id)initWithString:(id)a0;
- (void)dealloc;
- (unsigned long long)position;
- (BOOL)atEnd;
- (id)scanStringValue;
- (unsigned short)nextCharacter;
- (unsigned short)nextUnescapedCharacter;
- (id)scanAlertValue;
- (unsigned short)scanCharacter;
- (unsigned short)scanCharacterWithEscaping:(BOOL)a0;
- (id)scanKeyValuePair;
- (BOOL)scanPastCharacter:(unsigned short)a0;
- (BOOL)scanPastItemDelimiter;
- (BOOL)scanPastKeyValueSeparator;
- (void)scanPastWhitespace;
- (id)scanQuotedStringValue;
- (id)scanUnquotedStringValue;

@end
