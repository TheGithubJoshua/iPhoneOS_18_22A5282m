@class NSData;

@interface VGMLFloatIOData : VGMLIOData

@property (readonly, nonatomic) NSData *data;

- (const float *)getData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)getSize;
- (id)initWithSize:(unsigned long long)a0 withData:(const float *)a1;

@end
