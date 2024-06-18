@class NSData;

@interface NRMiniUUIDSet : NSObject <NSCopying, NSSecureCoding> {
    struct vector<unsigned int, std::allocator<unsigned int> > { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int> > { unsigned int *__value_; } __end_cap_; } _miniUUIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (BOOL)hasUUID:(id)a0;
- (id)initWithUUIDSet:(id)a0;

@end
