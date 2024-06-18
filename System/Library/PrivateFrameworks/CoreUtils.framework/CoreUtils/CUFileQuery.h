@class NSString;

@interface CUFileQuery : NSObject <CUDictionaryCodable>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *path;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithDictionary:(id)a0;

@end
