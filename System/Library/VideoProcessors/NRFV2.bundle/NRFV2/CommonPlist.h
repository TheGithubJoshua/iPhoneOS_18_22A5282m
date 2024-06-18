@interface CommonPlist : NSObject {
    int nrfVersion;
    int allocatorType;
    int allowFallback;
    int compressionLevel;
}

- (id)init;
- (int)readPlist:(id)a0;

@end
