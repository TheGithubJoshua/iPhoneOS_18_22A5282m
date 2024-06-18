@class NSString, NSArray, NSPredicate, NSEntityDescription;

@interface NSFetchIndexDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    NSString *_name;
    NSArray *_elements;
    NSEntityDescription *_entity;
    NSPredicate *_partialIndexPredicate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property (copy) NSArray *elements;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (copy) NSPredicate *partialIndexPredicate;

- (void)_throwIfNotEditable;
- (void)_setEntity:(id)a0;
- (BOOL)_isEditable;
- (id)initWithCoder:(id)a0;
- (long long)_compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 predicate:(id)a1 elements:(id)a2 entity:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 elements:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
