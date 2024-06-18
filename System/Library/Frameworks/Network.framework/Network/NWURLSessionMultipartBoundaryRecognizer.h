@class NSString;

@interface NWURLSessionMultipartBoundaryRecognizer : NSObject {
    NSString *_pattern;
    char *_rollbackBuffer;
    unsigned long long _rollbackBufferCapacity;
    unsigned long long _start;
    unsigned long long _end;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
