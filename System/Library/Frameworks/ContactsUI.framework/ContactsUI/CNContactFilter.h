@class NSString, NSPredicate;

@interface CNContactFilter : NSObject <NSCopying>

@property (copy, nonatomic) NSString *fullTextString;
@property (readonly, nonatomic) BOOL supportsSections;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (nonatomic) BOOL rankSortedResults;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
