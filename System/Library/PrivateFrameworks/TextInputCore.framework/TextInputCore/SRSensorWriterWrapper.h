@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>

+ (id)writerInstance;

- (BOOL)isReady;
- (void)write:(id)a0;
- (void)publishSessionStats:(id)a0 withSessionStartTime:(BOOL)a1;
- (void)write:(id)a0 withTimeStamp:(id)a1;

@end
