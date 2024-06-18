@class NSString, NSArray;

@interface LTUISourceMeta : NSObject

@property (nonatomic) unsigned long long origin;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSArray *languageHints;

- (id)init;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
