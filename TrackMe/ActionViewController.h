//
//  ActionViewController.h
//  TrackMe
//
//  Created by Bin Li on 3/24/14.
//  Copyright (c) 2014 Bin Li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ActionViewController : UIViewController <CLLocationManagerDelegate>
@property (strong, nonatomic) IBOutlet MKMapView *map;
@property (strong, nonatomic) IBOutlet UISegmentedControl *segmentAccuracy;
@property (strong, nonatomic) IBOutlet UISwitch *switchEnabled;


- (IBAction)accuracyChanged:(id)sender;
- (IBAction)enableStateChanged:(id)sender;

@end
