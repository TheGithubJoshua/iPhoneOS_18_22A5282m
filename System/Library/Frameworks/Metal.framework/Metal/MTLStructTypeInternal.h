@class NSString, NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (id)init;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1 typeName:(id)a2;
- (id)members;
- (id)memberByName:(id)a0;
- (unsigned long long)dataType;
- (id)description;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;

@end
