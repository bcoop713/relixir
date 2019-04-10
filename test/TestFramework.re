include Rely.Make({
  let config =
    Rely.TestFrameworkConfig.initialize({
      snapshotDir: "/usr/bob/bamf/hello-reason/test/lib/__snapshots__",
      projectDir: "/usr/bob/bamf/hello-reason"
    });
});
