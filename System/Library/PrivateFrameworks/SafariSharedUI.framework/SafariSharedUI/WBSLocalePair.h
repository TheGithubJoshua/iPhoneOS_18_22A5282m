@class NSString, _LTLocalePair, NSLocale;

@interface WBSLocalePair : NSObject

@property (readonly, nonatomic) NSLocale *sourceLocale;
@property (readonly, nonatomic) NSLocale *targetLocale;
@property (readonly, copy, nonatomic) NSString *sourceLocaleIdentifier;
@property (readonly, copy, nonatomic) NSString *targetLocaleIdentifier;
@property (readonly, copy, nonatomic) NSString *compactDescriptionForLogging;
@property (readonly, nonatomic) _LTLocalePair *lt_localePair;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLTLocalePair:(id)a0;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)initWithSourceLocaleIdentifier:(id)a0 targetLocaleIdentifier:(id)a1;

@end
