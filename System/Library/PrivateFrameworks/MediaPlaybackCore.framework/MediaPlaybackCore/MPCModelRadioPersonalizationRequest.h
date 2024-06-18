@class MPSectionedCollection;

@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying> {
    MPSectionedCollection *_radioStationTracks;
}

@property (nonatomic) BOOL analyticsSignpostsEnabled;

+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;

- (id)init;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRadioStationTracks:(id)a0;

@end
