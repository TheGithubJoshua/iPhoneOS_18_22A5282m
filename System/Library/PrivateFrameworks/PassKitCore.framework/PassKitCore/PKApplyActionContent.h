@class NSArray, PKApplyFooterContent;

@interface PKApplyActionContent : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *actionItems;
@property (readonly, nonatomic) PKApplyFooterContent *footerContent;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)analyticsDictionary;

@end
