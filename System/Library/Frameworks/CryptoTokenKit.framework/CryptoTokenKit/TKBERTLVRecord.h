@interface TKBERTLVRecord : TKTLVRecord

+ (id)zuluDateFormatter;
+ (unsigned long long)encodeNumber:(unsigned long long)a0 into:(char *)a1;
+ (id)dataForTag:(unsigned long long)a0;
+ (id)parseFromDataSource:(id)a0;

- (id)propertyList;
- (id)initWithTag:(unsigned long long)a0 value:(id)a1;
- (id)initWithPropertyList:(id)a0;
- (id)initWithTag:(unsigned long long)a0 records:(id)a1;

@end
