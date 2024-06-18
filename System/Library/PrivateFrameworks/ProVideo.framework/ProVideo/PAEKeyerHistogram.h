@interface PAEKeyerHistogram : NSObject <NSSecureCoding> {
    void *_histogram;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (void)setHistogram:(void *)a0;
- (void *)getHistogram;
- (void)setHistogramArray:(id)a0;

@end
