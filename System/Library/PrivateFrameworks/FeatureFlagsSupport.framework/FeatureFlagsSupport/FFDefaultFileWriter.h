@class NSDictionary;

@interface FFDefaultFileWriter : NSObject <FFFileWriter>

@property (readonly, nonatomic) NSDictionary *fileAttributes;
@property (readonly, nonatomic) NSDictionary *dirAttributes;

- (id)init;
- (BOOL)createDirectoryAtURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)writeData:(id)a0 toFile:(id)a1 error:(id *)a2;

@end
