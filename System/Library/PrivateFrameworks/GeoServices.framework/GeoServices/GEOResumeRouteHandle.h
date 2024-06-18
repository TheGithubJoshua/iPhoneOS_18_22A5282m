@class GEOOriginalWaypointRoute, NSData;

@interface GEOResumeRouteHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOOriginalWaypointRoute *routeGeometry;
@property (retain, nonatomic) NSData *serverSessionState;

+ (id)resumeRouteHandleStorageFromResumeRouteHandle:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithGEOStorageResumeRouteHandle:(id)a0;

@end
