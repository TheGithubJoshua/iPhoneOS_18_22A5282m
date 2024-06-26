@class NSString, NSUserDefaults;

@interface JDUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

@property (readonly) float reflectivityFilterThreshold;
@property (readonly) BOOL replayFirstFrame;
@property (readonly) int hybridOverride;
@property (readonly) unsigned int gmoFlowBits;
@property (readonly) BOOL ignoreWarperMesh;
@property (readonly) NSString *dumpWarperMeshesPath;
@property (readonly) NSString *dumpRawFramesPath;
@property (readonly) NSString *dumpPointCloudsPath;
@property (readonly) NSString *dumpFrameConfigsPath;

+ (id)defaults;

- (id)init;
- (void).cxx_destruct;
- (id)getObjectForKey:(id)a0 from:(id)a1 withDefaultValue:(id)a2;

@end
