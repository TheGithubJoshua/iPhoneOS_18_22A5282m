@class BMFileAttributes, NSFileHandle;

@interface BMFileHandle : NSObject <NSSecureCoding> {
    BOOL _initialized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int fd;
@property (readonly, nonatomic) BMFileAttributes *attributes;
@property (readonly, nonatomic) NSFileHandle *nsFileHandle;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_initWithFileDescriptor:(int)a0 attributes:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)overwriteWithData:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)a0 attributes:(id)a1;
- (id)readDataWithError:(id *)a0;

@end
