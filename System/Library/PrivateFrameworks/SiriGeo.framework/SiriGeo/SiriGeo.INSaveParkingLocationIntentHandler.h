@interface SiriGeo.INSaveParkingLocationIntentHandler : NSObject <INSaveParkingLocationIntentHandling> {
    void /* unknown type, empty encoding */ logObject;
    void /* unknown type, empty encoding */ locationController;
    void /* unknown type, empty encoding */ completion;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleSaveParkingLocation:(id)a0 completion:(id /* block */)a1;
- (void)resolveParkingLocationForSaveParkingLocation:(id)a0 withCompletion:(id /* block */)a1;

@end
