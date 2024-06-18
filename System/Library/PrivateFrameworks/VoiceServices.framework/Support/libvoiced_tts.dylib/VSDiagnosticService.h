@class NSString, NSDictionary;

@interface VSDiagnosticService : NSObject

@property (retain, nonatomic) NSString *audioDumpPath;
@property (retain, nonatomic) NSDictionary *audioDumpFileAttributes;

+ (id)defaultService;

- (id)initWithDirectory:(id)a0;
- (void)removeOldFiles;
- (void)dumpStreamAudio:(id)a0 forRequest:(id)a1;
- (void)dumpInstrumentMetrics:(id)a0 withTimestamp:(long long)a1;
- (void)createDirectoryIfNeeded;
- (void).cxx_destruct;
- (void)dumpCompressedAudio:(id)a0 forRequest:(id)a1;
- (void)removeDirectory;
- (unsigned long long)totalDiagnosticFileSize;
- (void)collectTailspin:(id /* block */)a0;

@end
