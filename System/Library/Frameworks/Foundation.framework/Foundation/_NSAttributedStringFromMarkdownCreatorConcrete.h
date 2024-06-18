@class NSString, NSMutableAttributedString;

@interface _NSAttributedStringFromMarkdownCreatorConcrete : NSObject <_NSAttributedStringFromMarkdownCreator> {
    NSMutableAttributedString *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)appendString:(id)a0 with:(id)a1;
- (unsigned short)lastCharacter;
- (id)result;
- (id)parseExtendedAttributesFromData:(id)a0 error:(id *)a1;
- (void)finalizeWithLanguageIdentifier:(id)a0;
- (void)dealloc;
- (void)appendString:(id)a0;

@end
