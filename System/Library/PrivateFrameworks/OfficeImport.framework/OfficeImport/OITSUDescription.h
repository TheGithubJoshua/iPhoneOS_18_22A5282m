@class NSString, NSMutableDictionary, NSObject, NSMutableArray;

@interface OITSUDescription : NSObject {
    NSObject *_object;
    Class _class;
    void *_cfType;
    NSString *_header;
    NSMutableDictionary *_fields;
    NSMutableArray *_fieldOrder;
    unsigned long long _fieldNameWidth;
    BOOL _commaSeparated;
}

+ (id)descriptionWithObject:(id)a0 format:(id)a1;
+ (id)descriptionWithObject:(id)a0 class:(Class)a1;
+ (id)descriptionWithCFType:(void *)a0 format:(id)a1;
+ (id)descriptionWithObject:(id)a0;
+ (id)descriptionWithObject:(id)a0 class:(Class)a1 format:(id)a2;

- (id)initWithObject:(id)a0 class:(Class)a1 format:(id)a2 arguments:(char *)a3;
- (id)initWithObject:(id)a0;
- (id)initWithObject:(id)a0 format:(id)a1;
- (id)descriptionString;
- (id)initWithCFType:(void *)a0 header:(id)a1;
- (void)addSuperDescription;
- (void)addField:(id)a0 format:(id)a1;
- (void)setFieldOptionCommaSeparated;
- (id)p_header;
- (id)initWithObject:(id)a0 class:(Class)a1 header:(id)a2;
- (void)addField:(id)a0 value:(id)a1;
- (void)dealloc;
- (id)initWithObject:(id)a0 class:(Class)a1 format:(id)a2;
- (void)addFieldWithFormat:(id)a0;
- (void)addFieldValue:(id)a0;

@end
