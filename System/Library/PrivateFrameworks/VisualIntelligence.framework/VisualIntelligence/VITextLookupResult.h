@class NSArray;

@interface VITextLookupResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *sections;

- (id)initWithSections:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
