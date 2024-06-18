@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject

@property (readonly) NSString *searchString;
@property (readonly) NSDate *date;

- (id)init;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithSearchString:(id)a0;
- (id)initWithSearchString:(id)a0 date:(id)a1;

@end
