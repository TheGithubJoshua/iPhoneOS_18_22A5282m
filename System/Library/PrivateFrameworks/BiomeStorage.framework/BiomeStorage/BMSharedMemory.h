@class BMFileAttributes;

@interface BMSharedMemory : NSObject <NSSecureCoding> {
    BOOL _mapped;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BMFileAttributes *attributes;
@property (readonly, nonatomic) void *address;
@property (readonly, nonatomic) unsigned long long size;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRegion:(void *)a0 size:(unsigned long long)a1 attributes:(id)a2;

@end
