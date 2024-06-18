@class NSString, NSMutableArray, NSMutableDictionary;

@interface OSAReport : NSObject {
    NSString *_incidentID;
    NSString *_logType;
    NSMutableDictionary *_logWritingOptions;
}

@property (readonly, nonatomic) double capture_time;
@property (readonly, nonatomic) NSMutableArray *notes;
@property (readonly, nonatomic) NSString *logfile;
@property (retain, nonatomic) NSString *etlKey;

+ (id)bootArgs;
+ (unsigned char)executeWithTimeout:(unsigned int)a0 Code:(id /* block */)a1;
+ (id)findBundleAtPath:(id)a0 withKeys:(id)a1 bundleURL:(inout id *)a2;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(BOOL)a0;

- (BOOL)saveWithOptions:(id)a0;
- (BOOL)isAppleTV;
- (id)init;
- (id)reportNamePrefix;
- (id)additionalIPSMetadata;
- (id)problemType;
- (id)incidentID;
- (void).cxx_destruct;
- (BOOL)isActionable;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)getSyslogForPids:(id)a0 andOptionalSenders:(id)a1;
- (id)appleCareDetails;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)symlink:(id)a0;
- (double)captureTime;

@end
