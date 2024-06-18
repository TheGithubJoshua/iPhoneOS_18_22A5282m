@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (id)copyXPCData;
- (struct __CFData { } *)copyCFData;
- (id)initWithCFData:(struct __CFData { } *)a0;
- (void)dealloc;
- (unsigned long long)length;
- (void *)bytes;

@end
