@class NSArray;

@interface CUFileResponse : NSObject <CUDictionaryCodable>

@property (copy, nonatomic) NSArray *fileItems;
@property (nonatomic) unsigned int flags;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithDictionary:(id)a0;

@end
