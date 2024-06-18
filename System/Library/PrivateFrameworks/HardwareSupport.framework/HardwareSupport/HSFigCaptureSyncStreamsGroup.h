@class HSFigCaptureDevice;

@interface HSFigCaptureSyncStreamsGroup : HSCMBaseObject

@property (readonly, nonatomic) struct OpaqueFigCaptureSynchronizedStreamsGroup { } *underlyingSyncStreamsGroup;
@property (readonly, nonatomic) HSFigCaptureDevice *device;

+ (id)statusDescription:(int)a0;

- (unsigned long long)hash;
- (id)valueForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithCaptureSyncStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { } *)a0 fromDevice:(id)a1;
- (BOOL)isEqualToStreamsGroup:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(struct __CFString { } *)a1 error:(id *)a2;
- (id)streams:(id *)a0;
- (id)valueForProperty:(struct __CFString { } *)a0 error:(id *)a1;

@end
