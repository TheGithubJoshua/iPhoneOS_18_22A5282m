@class NSString;

@interface ABPKMLNetworkBufferV2 : NSObject {
    struct e5rt_io_port { } *_port;
    struct e5rt_buffer_object { } *_memory;
    struct e5rt_surface_object { } *_surfaceObject;
    struct e5rt_tensor_desc { } *_tensorDesc;
    struct e5rt_surface_desc { } *_surfaceDesc;
    int _dataType;
    unsigned long long _bytesPerElement;
    BOOL _useSurface;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long channels;
@property (readonly, nonatomic) unsigned long long batchNumber;
@property (readonly, nonatomic) unsigned long long sequenceLength;
@property (readonly, nonatomic) unsigned long long strideWidth;
@property (readonly, nonatomic) unsigned long long strideHeight;
@property (readonly, nonatomic) unsigned long long strideChannels;
@property (readonly, nonatomic) unsigned long long strideBatchNumber;
@property (readonly, nonatomic) unsigned long long strideSequenceLength;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) int surfaceFormat;
@property (readonly, nonatomic) void *bytes;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_readSurfaceDescriptor;
- (BOOL)_readTensorDescriptor;
- (id)initWithName:(id)a0 function:(struct e5rt_program_function { } *)a1 bindMode:(long long)a2 useSurface:(BOOL)a3;
- (void)setInput:(id)a0 FromIOSurface:(struct __IOSurface { } *)a1;

@end
