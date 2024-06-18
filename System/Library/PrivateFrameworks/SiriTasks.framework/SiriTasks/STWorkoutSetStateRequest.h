@interface STWorkoutSetStateRequest : AFSiriRequest {
    long long _workoutState;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithState:(long long)a0;
- (id)createResponse;
- (long long)workoutState;

@end
