@protocol VCMediaControlInfoDelegate;

@interface VCMediaControlInfo : NSObject {
    unsigned short _bitmap;
    struct tagVCMediaControlVTableC { void /* function */ *serializedSize; void /* function */ *serialize; } _vtableC;
}

@property (readonly) unsigned long long serializedSize;
@property id<VCMediaControlInfoDelegate> delegate;
@property unsigned char version;
@property unsigned char fecFeedbackVersion;

- (id)init;
- (void)invalidate;
- (void)dispose;
- (int)configureWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a2;
- (int)getInfo:(void *)a0 bufferLength:(unsigned long long)a1 infoSize:(unsigned long long *)a2 type:(unsigned int)a3;
- (int)getInfoUnserialized:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned int x11; } *)a0 type:(unsigned int)a1;
- (BOOL)hasInfoType:(unsigned int)a0;
- (id)initWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a2 version:(unsigned char)a3;
- (int)serializeToBuffer:(char *)a0 bufferLength:(unsigned long long)a1 blobLength:(unsigned long long *)a2;
- (int)setInfo:(void *)a0 size:(unsigned long long)a1 type:(unsigned int)a2;
- (int)setInfoUnserialized:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned int x11; } *)a0 type:(unsigned int)a1;

@end
