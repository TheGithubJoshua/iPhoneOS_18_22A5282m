@class NSString;
@protocol MTLBuffer;

@interface FigMetalAllocatorBackendDescriptor : NSObject

@property (retain, nonatomic) id<MTLBuffer> externalBuffer;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long memSize;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) BOOL wireMemory;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
