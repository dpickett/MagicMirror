//
//  ViewController.m
//  MagicMirrorExecutable
//
//  Created by James Tang on 7/12/2015.
//  Copyright © 2015 James Tang. All rights reserved.
//

#import "ViewController.h"
#import "MagicMirror.h"
#import "MMVersionUpdateActor.h"

@interface ViewController ()

@property (strong) MagicMirror *magicmirror;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.magicmirror = [MagicMirror sharedInstance];
}

- (IBAction)buttonDidClick:(id)sender {
    [self.magicmirror showToolbar];
}

- (IBAction)licenseButtonDidPress:(id)sender {
    [self.magicmirror showLicenseInfo];
}
- (IBAction)checkForUpdatesDidPress:(id)sender {
    [self.magicmirror checkForUpdates];
}
- (IBAction)updatesAvaliableDidPress:(id)sender {
    [self.magicmirror showUpdateDialog];
}
- (IBAction)noUpdatesDidPress:(id)sender {
    [self.magicmirror showLatestDialog];
}

@end
