@class NSArray, NSString;

@interface AMDFetchDescriptor : NSObject

@property (retain, nonatomic) NSArray *_columnSpecs;
@property (nonatomic) long long _domain;
@property (retain, nonatomic) NSString *_id;
@property (nonatomic) int _keyColumn;
@property (nonatomic) int _listColumn;
@property (nonatomic) char _saveAsType;
@property (retain, nonatomic) NSString *_statement;
@property (nonatomic) int _valueColumn;

+ (id)extractPart:(id)a0 from:(id)a1 required:(BOOL)a2 error:(id *)a3;
+ (char)getCodeForSaveAsType:(id)a0;
+ (id)refreshAggregationDescriptors:(id)a0 forDomain:(id)a1 error:(id *)a2;

- (id)getId;
- (long long)getDomain;
- (id)persist:(id)a0 error:(id *)a1;
- (id)persistObject:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0 usingSchema:(id)a1 error:(id *)a2;
- (id)getStatement;
- (id)getColumnSpecs;
- (BOOL)isPersistable;
- (void)setDomain:(long long)a0;

@end
