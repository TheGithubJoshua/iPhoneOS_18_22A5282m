@class NSDictionary, NSString;

@interface LSPropertyList : NSObject <LSDetachable, NSCopying>

@property (readonly, nonatomic) NSDictionary *_expensiveDictionaryRepresentation;
@property (readonly) NSString *_applicationIdentifier;

+ (id)propertyListWithData:(id)a0;
+ (id)propertyListWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)new;
+ (id)propertyListWithDictionary:(id)a0;

- (id)init;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (id)_init;
- (void)detach;
- (id)objectsForKeys:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;

@end
