@class HDProfile;

@interface HDMobilityDefaultIsHeightPresentProvider : NSObject <HDMobilityIsHeightPresentProvider> {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)isHeightPresentWithError:(id *)a0;

@end
