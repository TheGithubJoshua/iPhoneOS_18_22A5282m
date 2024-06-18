@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
    int _SecCMSError;
    struct SecCmsEncoderStr { } *_encoder;
    struct SecCmsMessageStr { } *_message;
    NSMutableData *_singleShot;
}

- (id)data;
- (long long)appendData:(id)a0;
- (void)done;
- (void).cxx_destruct;
- (void)dealloc;

@end
